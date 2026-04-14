@class NSData;

@interface PKASCAssociatedReaderID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *readerID;
@property (nonatomic) unsigned long long priority;

- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)isEqualToASCAssociatedReaderID:(id)a0;

@end
