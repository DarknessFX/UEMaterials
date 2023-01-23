#pragma once
///
/// Created by DarknessFX - https://dfx.lv - @DrkFX
/// Source Code at https://github.com/DarknessFX/UEPlugins_DisableDefault
///
/// <attention>
/// Be careful with AppForm.h [Design], VisualStudio Form Designer reset the following static controls:
/// ==
/// public: static System::Windows::Forms::ToolStripStatusLabel^ lblStatus;
/// public: static System::Windows::Forms::ComboBox^ cmbUEFolder;
/// public: static System::Windows::Forms::Button^ btnBrowse;
/// public: static System::Windows::Forms::ToolStripSplitButton^ btnMenu;
/// public: static System::Data::DataTable^ dtbPlugins;
/// public: static System::Data::DataTable^ dtbPluginsOrig;
/// public: static System::Windows::Forms::DataGridView^ grdPlugins;
/// public: static System::Windows::Forms::ToolStripDropDownButton^ btnMinimal;
/// public: static System::Windows::Forms::ToolStripDropDownButton^ btnSave;
/// ==
/// If, after using the Form Designer the code don't compile anymore, make sure this static controls are correctly set.
/// See below the common error when this happens:
///     Error Code  : E0245
///     Description	: a nonstatic member reference must be relative to a specific object
/// </attention>


namespace UEPluginsDisableDefault {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

/// <summary>
/// Summary for AppForm
/// </summary>
public ref class AppForm : public System::Windows::Forms::Form
{
public:
AppForm(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
}
public: static  System::Windows::Forms::ToolStripStatusLabel^ lblStatus;
public: static  System::Windows::Forms::ComboBox^ cmbUEFolder;
public: static  System::Windows::Forms::Button^ btnBrowse;
public: static  System::Windows::Forms::TextBox^ txtSearch;
public: static  System::Windows::Forms::ToolStripSplitButton^ btnMenu;
public: static  System::Windows::Forms::ToolStripSplitButton^ btnBackup;
public: static  System::Data::DataTable^ dtbPlugins;
public: static  System::Data::DataTable^ dtbPluginsOrig;
public: static  System::Windows::Forms::DataGridView^ grdPlugins;
public: static  System::Windows::Forms::ToolStripDropDownButton^ btnMinimal;
public: static  System::Windows::Forms::ToolStripDropDownButton^ btnSave;

protected:
/// <summary>
/// Clean up any resources being used.
/// </summary>
~AppForm()
{
	if (components)
	{
		delete components;
	}
}

private:  
System::Windows::Forms::FlowLayoutPanel^ flwUEFolder;
System::Windows::Forms::Label^ lblUEFolder;
System::Windows::Forms::StatusStrip^ stsStrip;
System::Windows::Forms::ToolStripMenuItem^ mnuShowAll;
System::Windows::Forms::ToolStripMenuItem^ mnuShowDefault;
System::Windows::Forms::ToolStripMenuItem^ mnuBackupSave;
System::Windows::Forms::ToolStripMenuItem^ mnuBackupLoad;
System::Windows::Forms::FolderBrowserDialog^ dlgBrowse;

System::Data::DataSet^ datPlugins;
System::Data::DataColumn^ celName;
System::Data::DataColumn^ celEnabledDef;
System::Data::DataColumn^ celInstalled;
System::Data::DataColumn^ celFriendlyName;
System::Data::DataColumn^ celDescription;
System::Data::DataColumn^ celCategory;
System::Data::DataColumn^ celVersionName;
System::Data::DataColumn^ celPath;
System::Data::DataColumn^ celIcon;

System::Windows::Forms::DataGridViewCheckBoxColumn^ celEnabledByDefaultDataGridViewCheckBoxColumn;
System::Windows::Forms::DataGridViewCheckBoxColumn^ celInstalledDataGridViewCheckBoxColumn;
System::Windows::Forms::DataGridViewTextBoxColumn^ celCategoryDataGridViewTextBoxColumn;
System::Windows::Forms::DataGridViewImageColumn^ celIconDataGridViewImageColumn;
System::Windows::Forms::DataGridViewTextBoxColumn^ celNameDataGridViewTextBoxColumn;
System::Windows::Forms::DataGridViewTextBoxColumn^ celFriendlyNameDataGridViewTextBoxColumn;
System::Windows::Forms::DataGridViewTextBoxColumn^ celDescriptionDataGridViewTextBoxColumn;
System::Windows::Forms::DataGridViewTextBoxColumn^ celPathDataGridViewTextBoxColumn;
System::Windows::Forms::DataGridViewTextBoxColumn^ celVersionNameDataGridViewTextBoxColumn;

/// <summary>
/// Required designer variable.
/// </summary>
System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>
void InitializeComponent(void)
{
    System::ComponentModel::ComponentResourceManager^ resources = ( gcnew System::ComponentModel::ComponentResourceManager ( AppForm::typeid ) );
    System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = ( gcnew System::Windows::Forms::DataGridViewCellStyle () );
    this->stsStrip = ( gcnew System::Windows::Forms::StatusStrip () );
    this->lblStatus = ( gcnew System::Windows::Forms::ToolStripStatusLabel () );
    this->btnBackup = (gcnew System::Windows::Forms::ToolStripSplitButton());
    this->mnuBackupSave = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->mnuBackupLoad = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->btnMenu = ( gcnew System::Windows::Forms::ToolStripSplitButton () );
    this->mnuShowAll = ( gcnew System::Windows::Forms::ToolStripMenuItem () );
    this->mnuShowDefault = ( gcnew System::Windows::Forms::ToolStripMenuItem () );
    this->btnMinimal = ( gcnew System::Windows::Forms::ToolStripDropDownButton () );
    this->btnSave = ( gcnew System::Windows::Forms::ToolStripDropDownButton () );
    this->flwUEFolder = ( gcnew System::Windows::Forms::FlowLayoutPanel () );
    this->lblUEFolder = ( gcnew System::Windows::Forms::Label () );
    this->cmbUEFolder = ( gcnew System::Windows::Forms::ComboBox () );
    this->btnBrowse = ( gcnew System::Windows::Forms::Button () );
    this->dlgBrowse = ( gcnew System::Windows::Forms::FolderBrowserDialog () );
    this->txtSearch = (gcnew System::Windows::Forms::TextBox());
    this->datPlugins = ( gcnew System::Data::DataSet () );
    this->dtbPlugins = ( gcnew System::Data::DataTable () );
    this->celName = ( gcnew System::Data::DataColumn () );
    this->celEnabledDef = ( gcnew System::Data::DataColumn () );
    this->celInstalled = (gcnew System::Data::DataColumn());
    this->celFriendlyName = ( gcnew System::Data::DataColumn () );
    this->celDescription = ( gcnew System::Data::DataColumn () );
    this->celCategory = ( gcnew System::Data::DataColumn () );
    this->celVersionName = ( gcnew System::Data::DataColumn () );
    this->celPath = ( gcnew System::Data::DataColumn () );
    this->celIcon = ( gcnew System::Data::DataColumn () );
    this->dtbPluginsOrig = ( gcnew System::Data::DataTable () );
    this->grdPlugins = ( gcnew System::Windows::Forms::DataGridView () );
    this->celEnabledByDefaultDataGridViewCheckBoxColumn = ( gcnew System::Windows::Forms::DataGridViewCheckBoxColumn () );
    this->celInstalledDataGridViewCheckBoxColumn = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
    this->celCategoryDataGridViewTextBoxColumn = ( gcnew System::Windows::Forms::DataGridViewTextBoxColumn () );
    this->celIconDataGridViewImageColumn = ( gcnew System::Windows::Forms::DataGridViewImageColumn () );
    this->celNameDataGridViewTextBoxColumn = ( gcnew System::Windows::Forms::DataGridViewTextBoxColumn () );
    this->celFriendlyNameDataGridViewTextBoxColumn = ( gcnew System::Windows::Forms::DataGridViewTextBoxColumn () );
    this->celDescriptionDataGridViewTextBoxColumn = ( gcnew System::Windows::Forms::DataGridViewTextBoxColumn () );
    this->celPathDataGridViewTextBoxColumn = ( gcnew System::Windows::Forms::DataGridViewTextBoxColumn () );
    this->celVersionNameDataGridViewTextBoxColumn = ( gcnew System::Windows::Forms::DataGridViewTextBoxColumn () );
    this->stsStrip->SuspendLayout ();
    this->flwUEFolder->SuspendLayout ();
    ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->datPlugins ) )->BeginInit ();
    ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->dtbPlugins ) )->BeginInit ();
    ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->dtbPluginsOrig ) )->BeginInit ();
    ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->grdPlugins ) )->BeginInit ();
    this->SuspendLayout ();
    // 
    // stsStrip
    // 
    this->stsStrip->Items->AddRange ( gcnew cli::array< System::Windows::Forms::ToolStripItem^  > ( 5 )
    {
        this->lblStatus, 
        this->btnBackup,
        this->btnMenu,
        this->btnMinimal, 
        this->btnSave
    } );
    this->stsStrip->Location = System::Drawing::Point ( 0, 405 );
    this->stsStrip->Name = L"stsStrip";
    this->stsStrip->Size = System::Drawing::Size ( 943, 22 );
    this->stsStrip->TabIndex = 1;
    // 
    // lblStatus
    // 
    this->lblStatus->BorderSides = static_cast< System::Windows::Forms::ToolStripStatusLabelBorderSides >( ( ( ( System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top )
                                                                                                           | System::Windows::Forms::ToolStripStatusLabelBorderSides::Right )
                                                                                                           | System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom ) );
    this->lblStatus->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
    this->lblStatus->Font = ( gcnew System::Drawing::Font ( L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                              static_cast< System::Byte >( 0 ) ) );
    this->lblStatus->Name = L"lblStatus";
    this->lblStatus->Overflow = System::Windows::Forms::ToolStripItemOverflow::Never;
    this->lblStatus->Size = System::Drawing::Size ( 693, 17 );
    this->lblStatus->Spring = true;
    this->lblStatus->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
    // 
    // btnBackup
    // 
    this->btnBackup->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
    this->btnBackup->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2)
    {
      this->mnuBackupSave,
      this->mnuBackupLoad
    });
    this->btnBackup->Font = (gcnew System::Drawing::Font(L"Roboto", 9));
    this->btnBackup->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMenu.Image")));
    this->btnBackup->ImageTransparentColor = System::Drawing::Color::Magenta;
    this->btnBackup->Margin = System::Windows::Forms::Padding(4, 2, 4, 0);
    this->btnBackup->Name = L"btnBackup";
    this->btnBackup->Overflow = System::Windows::Forms::ToolStripItemOverflow::Never;
    this->btnBackup->Size = System::Drawing::Size(70, 20);
    this->btnBackup->Text = L"Backup";
    this->btnBackup->ToolTipText = L"Save or Load backups.";
    // 
    // mnuBackupSave 
    // 
    this->mnuBackupSave->Checked = false;
    this->mnuBackupSave->CheckOnClick = false;
    this->mnuBackupSave->Name = L"mnuBackupSave";
    this->mnuBackupSave->Size = System::Drawing::Size(223, 22);
    this->mnuBackupSave->Text = L"Save backup";
    this->mnuBackupSave->Click += gcnew System::EventHandler(this, &AppForm::mnuBackupSave_Click);
    // 
    // mnuBackupLoad 
    // 
    this->mnuBackupLoad->Checked = false;
    this->mnuBackupLoad->CheckOnClick = false;
    this->mnuBackupLoad->Name = L"mnuBackupLoad ";
    this->mnuBackupLoad->Size = System::Drawing::Size(223, 22);
    this->mnuBackupLoad->Text = L"Load backup";
    this->mnuBackupLoad->Click += gcnew System::EventHandler(this, &AppForm::mnuBackupLoad_Click);
    // 
    // btnMenu
    // 
    this->btnMenu->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
    this->btnMenu->DropDownItems->AddRange ( gcnew cli::array< System::Windows::Forms::ToolStripItem^  > ( 2 )
    {
        this->mnuShowAll,
        this->mnuShowDefault
    } );
    this->btnMenu->Font = ( gcnew System::Drawing::Font ( L"Roboto", 9 ) );
    this->btnMenu->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"btnMenu.Image" ) ) );
    this->btnMenu->ImageTransparentColor = System::Drawing::Color::Magenta;
    this->btnMenu->Margin = System::Windows::Forms::Padding ( 4, 2, 4, 0 );
    this->btnMenu->Name = L"btnMenu";
    this->btnMenu->Overflow = System::Windows::Forms::ToolStripItemOverflow::Never;
    this->btnMenu->Size = System::Drawing::Size ( 70, 20 );
    this->btnMenu->Text = L"Show All";
    this->btnMenu->ToolTipText = L"Change plugins list visibility";
    // 
    // mnuShowAll
    // 
    this->mnuShowAll->Checked = true;
    this->mnuShowAll->CheckOnClick = true;
    this->mnuShowAll->CheckState = System::Windows::Forms::CheckState::Checked;
    this->mnuShowAll->Name = L"mnuShowAll";
    this->mnuShowAll->Size = System::Drawing::Size ( 223, 22 );
    this->mnuShowAll->Text = L"Show All";
    this->mnuShowAll->Click += gcnew System::EventHandler ( this, &AppForm::mnuShowAll_Click );
    // 
    // mnuShowDefault
    // 
    this->mnuShowDefault->CheckOnClick = true;
    this->mnuShowDefault->Name = L"mnuShowDefault";
    this->mnuShowDefault->Size = System::Drawing::Size ( 223, 22 );
    this->mnuShowDefault->Text = L"Show EnableByDefault Only";
    this->mnuShowDefault->Click += gcnew System::EventHandler ( this, &AppForm::mnuShowDefault_Click );
    // 
    // btnMinimal
    // 
    this->btnMinimal->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
    this->btnMinimal->Enabled = false;
    this->btnMinimal->Font = ( gcnew System::Drawing::Font ( L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                               static_cast< System::Byte >( 0 ) ) );
    this->btnMinimal->ImageTransparentColor = System::Drawing::Color::Magenta;
    this->btnMinimal->Margin = System::Windows::Forms::Padding ( 4, 2, 4, 0 );
    this->btnMinimal->Name = L"btnMinimal";
    this->btnMinimal->ShowDropDownArrow = false;
    this->btnMinimal->Size = System::Drawing::Size ( 89, 20 );
    this->btnMinimal->Text = L"Apply Minimal";
    this->btnMinimal->ToolTipText = L"Apply minimal selection of necessary plugins";
    this->btnMinimal->Click += gcnew System::EventHandler ( this, &AppForm::btnMinimal_Click );
    // 
    // btnSave
    // 
    this->btnSave->BackColor = System::Drawing::SystemColors::Control;
    this->btnSave->Enabled = false;
    this->btnSave->Font = ( gcnew System::Drawing::Font ( L"Roboto", 9, System::Drawing::FontStyle::Bold ) );
    this->btnSave->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"btnSave.Image" ) ) );
    this->btnSave->ImageTransparentColor = System::Drawing::Color::Magenta;
    this->btnSave->Margin = System::Windows::Forms::Padding ( 4, 2, 4, 0 );
    this->btnSave->Name = L"btnSave";
    this->btnSave->ShowDropDownArrow = false;
    this->btnSave->Size = System::Drawing::Size ( 52, 20 );
    this->btnSave->Text = L"Save changes";
    this->btnSave->ToolTipText = L"Write selected changes to plugins.";
    this->btnSave->Click += gcnew System::EventHandler ( this, &AppForm::btnSave_Click );
    // 
    // flwUEFolder
    // 
    this->flwUEFolder->AutoSize = true;
    this->flwUEFolder->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->flwUEFolder->Controls->Add ( this->lblUEFolder );
    this->flwUEFolder->Controls->Add ( this->cmbUEFolder );
    this->flwUEFolder->Controls->Add ( this->btnBrowse );
    this->flwUEFolder->Controls->Add ( this->txtSearch );
    this->flwUEFolder->Dock = System::Windows::Forms::DockStyle::Top;
    this->flwUEFolder->Location = System::Drawing::Point ( 0, 0 );
    this->flwUEFolder->Name = L"flwUEFolder";
    this->flwUEFolder->Size = System::Drawing::Size ( 943, 30 );
    this->flwUEFolder->TabIndex = 2;
    this->flwUEFolder->WrapContents = false;
    // 
    // lblUEFolder
    // 
    this->lblUEFolder->AutoSize = true;
    this->lblUEFolder->Dock = System::Windows::Forms::DockStyle::Left;
    this->lblUEFolder->Font = ( gcnew System::Drawing::Font ( L"Roboto", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                                static_cast< System::Byte >( 0 ) ) );
    this->lblUEFolder->Location = System::Drawing::Point ( 3, 10 );
    this->lblUEFolder->Margin = System::Windows::Forms::Padding ( 3, 10, 3, 0 );
    this->lblUEFolder->Name = L"lblUEFolder";
    this->lblUEFolder->Size = System::Drawing::Size ( 109, 20 );
    this->lblUEFolder->TabIndex = 0;
    this->lblUEFolder->Text = L"Unreal Engine Folder";
    // 
    // cmbUEFolder
    // 
    this->cmbUEFolder->Dock = System::Windows::Forms::DockStyle::Fill;
    this->cmbUEFolder->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
    this->cmbUEFolder->FlatStyle = System::Windows::Forms::FlatStyle::System;
    this->cmbUEFolder->Font = ( gcnew System::Drawing::Font ( L"Roboto", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                static_cast< System::Byte >( 0 ) ) );
    this->cmbUEFolder->Location = System::Drawing::Point ( 118, 5 );
    this->cmbUEFolder->Margin = System::Windows::Forms::Padding ( 3, 5, 3, 3 );
    this->cmbUEFolder->Name = L"cmbUEFolder";
    this->cmbUEFolder->Size = System::Drawing::Size ( 240, 21 );
    this->cmbUEFolder->TabIndex = 1;
    this->cmbUEFolder->SelectedIndexChanged += gcnew System::EventHandler ( this, &AppForm::cmbUEFolder_SelectedIndexChanged );
    // 
    // btnBrowse
    // 
    this->btnBrowse->AutoSize = true;
    this->btnBrowse->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->btnBrowse->Dock = System::Windows::Forms::DockStyle::Right;
    this->btnBrowse->Font = ( gcnew System::Drawing::Font ( L"Roboto", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                              static_cast< System::Byte >( 0 ) ) );
    this->btnBrowse->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"btnBrowse.Image" ) ) );
    this->btnBrowse->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
    this->btnBrowse->Location = System::Drawing::Point ( 364, 3 );
    this->btnBrowse->Name = L"btnBrowse";
    this->btnBrowse->Size = System::Drawing::Size ( 72, 24 );
    this->btnBrowse->TabIndex = 2;
    this->btnBrowse->Text = L"Browse";
    this->btnBrowse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
    this->btnBrowse->UseVisualStyleBackColor = true;
    this->btnBrowse->Click += gcnew System::EventHandler ( this, &AppForm::btnBrowse_Click );
    // 
    // dlgBrowse
    // 
    this->dlgBrowse->RootFolder = System::Environment::SpecialFolder::MyComputer;
    this->dlgBrowse->ShowNewFolderButton = false;
    // 
    // txtSearch
    // 
    this->txtSearch->AutoSize = false;
    this->txtSearch->Dock = System::Windows::Forms::DockStyle::Top;
    this->txtSearch->Font = (gcnew System::Drawing::Font(L"Roboto", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
      static_cast<System::Byte>(0)));
    this->txtSearch->Location = System::Drawing::Point(434, 3);
    this->txtSearch->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
    this->txtSearch->Name = L"txtSearch";
    this->txtSearch->Size = System::Drawing::Size(120, 20);
    this->txtSearch->TabIndex = 3;
    this->txtSearch->Text = L"Search";
    this->txtSearch->GotFocus += gcnew System::EventHandler(this, &AppForm::txtSearch_GotFocus);
    this->txtSearch->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &AppForm::txtSearch_KeyUp);
    // 
    // datPlugins
    // 
    this->datPlugins->DataSetName = L"datPlugins";
    this->datPlugins->Tables->AddRange ( gcnew cli::array< System::Data::DataTable^  > ( 1 ) { this->dtbPlugins } );
    // 
    // dtbPlugins
    // 
    this->dtbPlugins->CaseSensitive = true;
    this->dtbPlugins->Columns->AddRange ( gcnew cli::array< System::Data::DataColumn^  > ( 9 )
    {
        this->celName, this->celEnabledDef, this->celInstalled,
            this->celFriendlyName, this->celDescription, this->celCategory, this->celVersionName, this->celPath, this->celIcon
    } );
    cli::array< System::String^ >^ __mcTemp__1 = gcnew cli::array< System::String^  > ( 1 ) { L"celName" };
    this->dtbPlugins->Constraints->AddRange ( gcnew cli::array< System::Data::Constraint^  > ( 1 )
    {
        ( gcnew System::Data::UniqueConstraint ( L"Constraint1",
          __mcTemp__1, true ) )
    } );
    this->dtbPlugins->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  > ( 1 ) { this->celName };
    this->dtbPlugins->TableName = L"dtbPlugins";
    this->dtbPlugins->CaseSensitive = false;
    // 
    // celName
    // 
    this->celName->AllowDBNull = false;
    this->celName->Caption = L"Name";
    this->celName->ColumnName = L"celName";
    this->celName->DefaultValue = L"";
    this->celName->MaxLength = 50;
    // 
    // celEnabledDef
    // 
    this->celEnabledDef->AllowDBNull = false;
    this->celEnabledDef->ColumnName = L"celEnabledByDefault";
    this->celEnabledDef->DataType = System::Boolean::typeid;
    this->celEnabledDef->DefaultValue = false;
    // 
    // celEnabledDef
    // 
    this->celInstalled->AllowDBNull = false;
    this->celInstalled->ColumnName = L"celInstalled";
    this->celInstalled->DataType = System::Boolean::typeid;
    this->celInstalled->DefaultValue = false;
    // 
    // celFriendlyName
    // 
    this->celFriendlyName->Caption = L"Friendly Name";
    this->celFriendlyName->ColumnName = L"celFriendlyName";
    // 
    // celDescription
    // 
    this->celDescription->ColumnName = L"celDescription";
    // 
    // celCategory
    // 
    this->celCategory->ColumnName = L"celCategory";
    // 
    // celVersionName
    // 
    this->celVersionName->Caption = L"Version";
    this->celVersionName->ColumnName = L"celVersionName";
    // 
    // celPath
    // 
    this->celPath->ColumnName = L"celPath";
    // 
    // celIcon
    // 
    this->celIcon->ColumnName = L"celIcon";
    this->celIcon->DataType = System::Object::typeid;
    // 
    // dtbPluginsOrig
    // 
    this->dtbPluginsOrig->CaseSensitive = true;
    this->dtbPluginsOrig->TableName = L"dtbPluginsOrig";
    // 
    // grdPlugins
    // 
    this->grdPlugins->AllowUserToAddRows = false;
    this->grdPlugins->AllowUserToDeleteRows = false;
    this->grdPlugins->AllowUserToResizeRows = false;
    this->grdPlugins->AutoGenerateColumns = false;
    this->grdPlugins->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
    dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
    dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
    dataGridViewCellStyle1->Font = ( gcnew System::Drawing::Font ( L"Roboto", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                                     static_cast< System::Byte >( 0 ) ) );
    dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
    dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
    dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
    dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
    this->grdPlugins->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
    this->grdPlugins->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
    this->grdPlugins->Columns->AddRange ( gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  > ( 9 )
    {
        this->celEnabledByDefaultDataGridViewCheckBoxColumn, this->celInstalledDataGridViewCheckBoxColumn,
            this->celCategoryDataGridViewTextBoxColumn, this->celIconDataGridViewImageColumn, this->celNameDataGridViewTextBoxColumn, this->celFriendlyNameDataGridViewTextBoxColumn,
            this->celDescriptionDataGridViewTextBoxColumn, this->celPathDataGridViewTextBoxColumn, this->celVersionNameDataGridViewTextBoxColumn
    } );
    this->grdPlugins->DataMember = L"dtbPlugins";
    this->grdPlugins->DataSource = this->datPlugins;
    this->grdPlugins->Dock = System::Windows::Forms::DockStyle::Fill;
    this->grdPlugins->Location = System::Drawing::Point ( 0, 30 );
    this->grdPlugins->MultiSelect = false;
    this->grdPlugins->Name = L"grdPlugins";
    this->grdPlugins->RowHeadersVisible = false;
    this->grdPlugins->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
    this->grdPlugins->Size = System::Drawing::Size ( 943, 375 );
    this->grdPlugins->TabIndex = 4;
    this->grdPlugins->VirtualMode = true;
    this->grdPlugins->CurrentCellDirtyStateChanged += gcnew System::EventHandler ( this, &AppForm::grdPlugins_CurrentCellDirtyStateChanged );
    // 
    // celEnabledByDefaultDataGridViewCheckBoxColumn
    // 
    this->celEnabledByDefaultDataGridViewCheckBoxColumn->DataPropertyName = L"celEnabledByDefault";
    this->celEnabledByDefaultDataGridViewCheckBoxColumn->FillWeight = 60;
    this->celEnabledByDefaultDataGridViewCheckBoxColumn->HeaderText = L"ByDefault";
    this->celEnabledByDefaultDataGridViewCheckBoxColumn->Name = L"celEnabledByDefaultDataGridViewCheckBoxColumn";
    this->celEnabledByDefaultDataGridViewCheckBoxColumn->Width = 60;
    // 
    // celEnabledByDefaultDataGridViewCheckBoxColumn
    // 
    this->celInstalledDataGridViewCheckBoxColumn->DataPropertyName = L"celInstalled";
    this->celInstalledDataGridViewCheckBoxColumn->FillWeight = 60;
    this->celInstalledDataGridViewCheckBoxColumn->HeaderText = L"Installed";
    this->celInstalledDataGridViewCheckBoxColumn->Name = L"celInstalledDataGridViewCheckBoxColumn";
    this->celInstalledDataGridViewCheckBoxColumn->ReadOnly = true;
    this->celInstalledDataGridViewCheckBoxColumn->Width = 60;
    // 
    // celCategoryDataGridViewTextBoxColumn
    // 
    this->celCategoryDataGridViewTextBoxColumn->DataPropertyName = L"celCategory";
    this->celCategoryDataGridViewTextBoxColumn->FillWeight = 100;
    this->celCategoryDataGridViewTextBoxColumn->HeaderText = L"Category";
    this->celCategoryDataGridViewTextBoxColumn->Name = L"celCategoryDataGridViewTextBoxColumn";
    this->celCategoryDataGridViewTextBoxColumn->ReadOnly = true;
    this->celCategoryDataGridViewTextBoxColumn->Width = 100;
    // 
    // celIconDataGridViewImageColumn
    // 
    this->celIconDataGridViewImageColumn->DataPropertyName = L"celIcon";
    this->celIconDataGridViewImageColumn->FillWeight = 30;
    this->celIconDataGridViewImageColumn->HeaderText = L"Icon";
    this->celIconDataGridViewImageColumn->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
    this->celIconDataGridViewImageColumn->Name = L"celIconDataGridViewImageColumn";
    this->celIconDataGridViewImageColumn->ReadOnly = true;
    this->celIconDataGridViewImageColumn->Width = 30;
    // 
    // celNameDataGridViewTextBoxColumn
    // 
    this->celNameDataGridViewTextBoxColumn->DataPropertyName = L"celName";
    this->celNameDataGridViewTextBoxColumn->FillWeight = 170;
    this->celNameDataGridViewTextBoxColumn->HeaderText = L"Name";
    this->celNameDataGridViewTextBoxColumn->Name = L"celNameDataGridViewTextBoxColumn";
    this->celNameDataGridViewTextBoxColumn->ReadOnly = true;
    this->celNameDataGridViewTextBoxColumn->Visible = false;
    this->celNameDataGridViewTextBoxColumn->Width = 170;
    // 
    // celFriendlyNameDataGridViewTextBoxColumn
    // 
    this->celFriendlyNameDataGridViewTextBoxColumn->DataPropertyName = L"celFriendlyName";
    this->celFriendlyNameDataGridViewTextBoxColumn->FillWeight = 170;
    this->celFriendlyNameDataGridViewTextBoxColumn->HeaderText = L"Name";
    this->celFriendlyNameDataGridViewTextBoxColumn->Name = L"celFriendlyNameDataGridViewTextBoxColumn";
    this->celFriendlyNameDataGridViewTextBoxColumn->ReadOnly = true;
    this->celFriendlyNameDataGridViewTextBoxColumn->Width = 170;
    // 
    // celDescriptionDataGridViewTextBoxColumn
    // 
    this->celDescriptionDataGridViewTextBoxColumn->DataPropertyName = L"celDescription";
    this->celDescriptionDataGridViewTextBoxColumn->FillWeight = 240;
    this->celDescriptionDataGridViewTextBoxColumn->HeaderText = L"Description";
    this->celDescriptionDataGridViewTextBoxColumn->Name = L"celDescriptionDataGridViewTextBoxColumn";
    this->celDescriptionDataGridViewTextBoxColumn->ReadOnly = true;
    this->celDescriptionDataGridViewTextBoxColumn->Width = 240;
    // 
    // celPathDataGridViewTextBoxColumn
    // 
    this->celPathDataGridViewTextBoxColumn->DataPropertyName = L"celPath";
    this->celPathDataGridViewTextBoxColumn->FillWeight = 240;
    this->celPathDataGridViewTextBoxColumn->HeaderText = L"Path";
    this->celPathDataGridViewTextBoxColumn->Name = L"celPathDataGridViewTextBoxColumn";
    this->celPathDataGridViewTextBoxColumn->ReadOnly = true;
    this->celPathDataGridViewTextBoxColumn->Width = 240;
    // 
    // celVersionNameDataGridViewTextBoxColumn
    // 
    this->celVersionNameDataGridViewTextBoxColumn->DataPropertyName = L"celVersionName";
    this->celVersionNameDataGridViewTextBoxColumn->FillWeight = 40;
    this->celVersionNameDataGridViewTextBoxColumn->HeaderText = L"Ver";
    this->celVersionNameDataGridViewTextBoxColumn->Name = L"celVersionNameDataGridViewTextBoxColumn";
    this->celVersionNameDataGridViewTextBoxColumn->ReadOnly = true;
    this->celVersionNameDataGridViewTextBoxColumn->Width = 40;
    // 
    // AppForm
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size ( 963, 427 );
    this->Controls->Add ( this->grdPlugins );
    this->Controls->Add ( this->flwUEFolder );
    this->Controls->Add ( this->stsStrip );
    this->Font = ( gcnew System::Drawing::Font ( L"Roboto", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast< System::Byte >( 0 ) ) );
    this->Icon = ( cli::safe_cast< System::Drawing::Icon^ >( resources->GetObject ( L"$this.Icon" ) ) );
    this->MinimumSize = System::Drawing::Size ( 456, 200 );
    this->Name = L"AppForm";
    this->Text = L"UEPlugins_DisableDefault";
    this->Load += gcnew System::EventHandler ( this, &AppForm::AppForm_Load );
    this->SizeChanged += gcnew System::EventHandler ( this, &AppForm::AppForm_SizeChanged );
    this->stsStrip->ResumeLayout ( false );
    this->stsStrip->PerformLayout ();
    this->flwUEFolder->ResumeLayout ( false );
    this->flwUEFolder->PerformLayout ();
    ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->datPlugins ) )->EndInit ();
    ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->dtbPlugins ) )->EndInit ();
    ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->dtbPluginsOrig ) )->EndInit ();
    ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->grdPlugins ) )->EndInit ();
    this->ResumeLayout ( false );
    this->PerformLayout ();

}
#pragma endregion

void AppForm_Load ( System::Object^ sender, System::EventArgs^ e );
void AppForm_SizeChanged ( System::Object^ sender, System::EventArgs^ e );

void cmbUEFolder_SelectedIndexChanged ( System::Object^ sender, System::EventArgs^ e );
void btnBrowse_Click ( System::Object^ sender, System::EventArgs^ e );
void btnMinimal_Click ( System::Object^ sender, System::EventArgs^ e );
void btnSave_Click ( System::Object^ sender, System::EventArgs^ e );
void mnuShowAll_Click ( System::Object^ sender, System::EventArgs^ e );
void mnuShowDefault_Click ( System::Object^ sender, System::EventArgs^ e );
void btnBackup_Click(System::Object^ sender, System::EventArgs^ e);
void mnuBackupSave_Click(System::Object^ sender, System::EventArgs^ e);
void mnuBackupLoad_Click(System::Object^ sender, System::EventArgs^ e);
void grdPlugins_CurrentCellDirtyStateChanged ( System::Object^ sender, System::EventArgs^ e );
void txtSearch_GotFocus(System::Object^ sender, System::EventArgs^ e);
void txtSearch_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

void UpdateFlow();    
public: static void StatusUpdate(System::String^ Message);

};
};

// DFX Main functions
using namespace System;
using namespace System::Data;

enum class AppState 
{
    Default  = 0,
    Wait     = 1
};
void StateUpdate(AppState State);

String^ Append(String^ str0, System::String^ str1);
String^ ReplaceSlashes(String^ Path);

void Searching(String^ Path);
void FindUPlugin(String^ Path);
void AddUPlugin(String^ FileUPlugin);
void ReadUPlugin(String^ FileUPlugin, DataRow^& mDataRow);
void GetJSONValue(String^& str0);

int CountEnabledByDefault();
bool IsIgnoredFolder(String^ Path);

enum class ControlsState 
{
    Default  = true,
    Wait     = false
};
void ControlsStateChange(ControlsState State);

void BackupAll();
Collections::Generic::List<String^>^ FindAllUPlugins(String^ Path);
