@class NSString, NSData, NSDate, NSNumber;

@interface HAPKeychainItem : HMFObject <NSMutableCopying>

@property (retain, nonatomic) NSString *accessGroup;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSData *valueData;
@property (nonatomic, getter=isSyncable) char syncable;
@property (readonly, nonatomic, getter=isInvisible) char invisible;
@property (nonatomic) void *platformReference;
@property (retain, nonatomic) NSData *genericData;
@property (retain, nonatomic) NSString *viewHint;
@property (retain, nonatomic) NSDate *creationDate;

+ (char)isQueryResultValid:(struct __CFDictionary { } *)a0 shouldIncludeData:(char)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithQueryResult:(struct __CFDictionary { } *)a0 shouldIncludeData:(char)a1;
- (char)matchesPublicKeyData:(id)a0;

@end
