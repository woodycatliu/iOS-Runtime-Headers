/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignatureCreationViewController_iOS : UIViewController <UINavigationBarDelegate> {
    AKSignatureBaselineView * _baselineView;
    AKController * _controller;
    <AKSignatureCreationControllerDelegate> * _delegate;
    UILabel * _label;
    UINavigationBar * _navBar;
    AKSmoothPathView * _pathView;
    AKSignatureView * _signatureView;
}

@property (nonatomic, retain) AKSignatureBaselineView *baselineView;
@property (nonatomic) AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property <AKSignatureCreationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UINavigationBar *navBar;
@property (nonatomic, retain) AKSmoothPathView *pathView;
@property (nonatomic, retain) AKSignatureView *signatureView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_clear:(id)arg1;
- (void)_done:(id)arg1;
- (void)_validateButtons;
- (id)baselineView;
- (id)controller;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (id)initWithController:(id)arg1;
- (id)label;
- (void)loadView;
- (id)navBar;
- (id)pathView;
- (int)positionForBar:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)setBaselineView:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setPathView:(id)arg1;
- (void)setSignatureView:(id)arg1;
- (id)signatureView;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end