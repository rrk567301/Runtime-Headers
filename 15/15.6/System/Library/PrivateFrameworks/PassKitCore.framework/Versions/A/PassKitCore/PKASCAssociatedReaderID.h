@class NSData;

@interface PKASCAssociatedReaderID : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *readerID;
@property (nonatomic) unsigned long long priority;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)redactedDescription;
- (char)isEqualToASCAssociatedReaderID:(id)a0;
- (id)asDictionary;

@end
