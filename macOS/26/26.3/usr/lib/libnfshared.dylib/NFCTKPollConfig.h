@class NSArray;

@interface NFCTKPollConfig : NFReaderSessionPollConfig <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *appletIdentifiers;

+ (id)pollConfigWithAppletIdentifiers:(id)a0;

- (id)asDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_validate;
- (id)initWithAppletIdentifiers:(id)a0;

@end
