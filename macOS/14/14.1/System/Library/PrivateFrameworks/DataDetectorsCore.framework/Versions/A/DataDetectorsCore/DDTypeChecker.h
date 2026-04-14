@class NSDictionary, NSMutableDictionary;
@protocol DDTypeCheckerDelegate;

@interface DDTypeChecker : NSObject {
    NSMutableDictionary *_cache;
    NSDictionary *_collection;
}

@property id<DDTypeCheckerDelegate> delegate;

- (void)dealloc;
- (BOOL)validate:(id)a0;
- (int)_deepValidateSubComponentRec:(id)a0;
- (int)_validateCurrent:(id)a0;
- (int)_validateRec:(id)a0;
- (id)initWithTypeCollection:(id)a0;
- (int)validateNamedType:(id)a0;

@end
