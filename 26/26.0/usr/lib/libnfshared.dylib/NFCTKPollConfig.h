@class NSArray;

@interface NFCTKPollConfig : NFReaderSessionPollConfig <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *appletIdentifiers;

+ (id)pollConfigWithAppletIdentifiers:(id)a0;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_validate;
- (id)initWithAppletIdentifiers:(id)a0;

@end
