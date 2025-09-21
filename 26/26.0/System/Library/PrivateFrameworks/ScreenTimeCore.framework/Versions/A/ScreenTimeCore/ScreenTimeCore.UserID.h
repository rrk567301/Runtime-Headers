@class NSString;

@interface ScreenTimeCore.UserID : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _altDSID;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)local;
+ (id)remoteWithAltDSID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)altDSIDAndReturnError:(id *)a0;

@end
