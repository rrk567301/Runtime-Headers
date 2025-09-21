@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
    NSArray *_affectedStores;
}

@property (retain, nonatomic) NSArray *affectedStores;
@property (readonly) unsigned long long requestType;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)_secureOperation;
- (void)_setSecureOperation:(char)a0;

@end
