@class NSError, NSArray, NSMutableArray;

@interface _NSKeyedUnarchiverHelper : NSObject {
    NSArray *_allowed;
    unsigned int _lastRef;
    NSMutableArray *_allowedClasses;
    BOOL expectsUnnestedCollection;
    BOOL decodedCollection;
}

@property (copy) NSError *decodeError;

- (void)dealloc;
- (void)setAllowedClassNames:(id)a0;
- (id)allowedClassNames;
- (id)init;
- (BOOL)classNameAllowed:(Class)a0;

@end
