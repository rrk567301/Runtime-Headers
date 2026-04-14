@class QLPreviewView;
@protocol QLPreviewViewDelegate;

@interface FI_TQLPreviewViewWrapper : FI_TUpdateLayerView {
    QLPreviewView *_qlPreviewView;
}

@property (readonly, retain) QLPreviewView *qlPreviewView;
@property id<QLPreviewViewDelegate> delegate;

+ (id)keyPathsForValuesAffectingDelegate;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)initCommon;
- (id)qlPreviewView;

@end
