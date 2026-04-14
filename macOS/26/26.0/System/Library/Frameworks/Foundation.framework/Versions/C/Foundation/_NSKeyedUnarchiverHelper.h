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
- (id)init;
- (BOOL)classNameAllowed:(Class)a0;
- (id)allowedClassNames;
- (void)setAllowedClassNames:(id)a0;

@end
