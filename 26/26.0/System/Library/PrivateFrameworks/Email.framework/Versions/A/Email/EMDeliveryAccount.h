@class NSString;

@interface EMDeliveryAccount : EMAccount <EMDeliveryAccountBuilder> {
    NSString *_name;
}

@property unsigned long long maximumMessageBytes;
@property (copy) NSString *username;
@property (copy) NSString *hostname;
@property (getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 name:(id)a1 hostname:(id)a2 builder:(id /* block */)a3;
- (void)_commonInitName:(id)a0 hostname:(id)a1 builder:(id /* block */)a2;

@end
