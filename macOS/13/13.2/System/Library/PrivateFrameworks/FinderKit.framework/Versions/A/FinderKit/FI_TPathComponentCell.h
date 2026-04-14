@class NSValue, NSObject;
@protocol TPathControlDelegate;

@interface FI_TPathComponentCell : NSPathComponentCell {
    struct TNSWeakPtr<NSObject<TPathControlDelegate>> { NSValue *fWeakObject; } _weakDelegate;
}

@property (weak, nonatomic) NSObject<TPathControlDelegate> *delegate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)URL;
- (id)accessibilityActionNames;

@end
