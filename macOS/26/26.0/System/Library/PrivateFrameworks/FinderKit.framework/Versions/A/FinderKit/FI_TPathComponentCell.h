@class NSObject;
@protocol TPathControlDelegate;

@interface FI_TPathComponentCell : NSPathComponentCell {
    struct TNSWeakPtr<NSObject<TPathControlDelegate>> { NSObject<TPathControlDelegate> *fWeakObject; } _weakDelegate;
}

@property (weak, nonatomic) NSObject<TPathControlDelegate> *delegate;

- (id)URL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityActionNames;

@end
