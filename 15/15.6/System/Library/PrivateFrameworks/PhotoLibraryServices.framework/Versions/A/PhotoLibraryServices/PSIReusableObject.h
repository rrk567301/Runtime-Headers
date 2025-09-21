@class NSString;

@interface PSIReusableObject : NSObject <PSITypedObject> {
    char _isPreparedForReuse;
    char _isPreparingFromStatement;
}

@property (readonly, nonatomic) char isPreparedFromStatement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)prepareForReuse;
- (unsigned long long)objectType;
- (void)didPrepareFromStatement:(struct sqlite3_stmt { } *)a0;
- (void)prepareFromStatement:(struct sqlite3_stmt { } *)a0;

@end
