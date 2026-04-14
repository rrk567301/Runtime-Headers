@class NSString;

@interface AddressBookEntry : NSObject <NSCopying>

@property (readonly) unsigned int objectID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSString *fullAddress;
@property (readonly) NSString *address;
@property (readonly) long long port;
@property (readonly) int sessionType;

- (void)setObjectID:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)init:(id)a0 sessionType:(int)a1 fullAddress:(id)a2;

@end
