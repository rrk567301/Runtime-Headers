@class NSData, NSString;

@interface THThreadNetworkCredentialsDataSet : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *dataSetArray;
@property (copy, nonatomic) NSString *userInfo;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataSetArray:(id)a0 userInfo:(id)a1;

@end
