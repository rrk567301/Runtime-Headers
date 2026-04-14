@class NSValue, NSObject;
@protocol TPathControlDelegate;

@interface FI_TPathComponentCell : NSPathComponentCell {
    struct TNSWeakPtr<NSObject<TPathControlDelegate>, void> { NSValue *fWeakObject; } _weakDelegate;
}

@property (weak, nonatomic) NSObject<TPathControlDelegate> *delegate;

- (void).cxx_destruct;
- (id)URL;
- (id).cxx_construct;
- (id)accessibilityActionNames;

@end
