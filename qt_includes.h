#include <QtWidgets/QApplication>
#include <QtWidgets/QToolButton>
#include <QtGui/QPixmap>
#include <QtGui/QIcon>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLineEdit>
#include <QtGui/QIntValidator>
#include <QtGui/QDoubleValidator>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtCore/QTimer>
#include <QtWidgets/QSpinBox>
#include <QtCore/QTime>
#include <QtCore/QDebug>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtGui/QFocusEvent>
#include <QtGui/QMouseEvent>

#include <QtGlobal>
#if QT_VERSION > QT_VERSION_CHECK(5, 4, 0)
    #include <QtUiPlugin/QDesignerExportWidget>
    #include <QtUiPlugin/QDesignerCustomWidgetInterface>
#else
    #include <QtDesigner/QDesignerExportWidget>
    #include <QtDesigner/QDesignerCustomWidgetInterface>
#endif
