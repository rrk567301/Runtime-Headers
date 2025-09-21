@class QLPreviewView;
@protocol QLPreviewViewDelegate;

@interface FI_TQLPreviewViewWrapper : FI_TUpdateLayerView {
    QLPreviewView *_qlPreviewView;
}

@property (readonly, retain) QLPreviewView *qlPreviewView;
@property id<QLPreviewViewDelegate> delegate;

+ (id)keyPathsForValuesAffectingDelegate;

- (void)initCommon;
- (void).cxx_destruct;

@end
