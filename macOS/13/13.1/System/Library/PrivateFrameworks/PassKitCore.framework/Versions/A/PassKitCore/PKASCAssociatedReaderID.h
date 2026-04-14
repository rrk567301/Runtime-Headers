@class NSData, PKASCAssociatedReaderIDReaderCA;

@interface PKASCAssociatedReaderID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *readerID;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) PKASCAssociatedReaderIDReaderCA *readerCA;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (BOOL)isEqualToASCAssociatedReaderID:(id)a0;

@end
