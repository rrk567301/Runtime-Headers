@interface QCPlugInViewController : NSViewController {
    void *_private;
}

- (id)description;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)plugIn;
- (id)initWithPlugIn:(id)a0 viewNibName:(id)a1;

@end
