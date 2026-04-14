@class NSData, PKASCAssociatedReaderIDReaderCA;

@interface PKASCAssociatedReaderID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *readerID;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) PKASCAssociatedReaderIDReaderCA *readerCA;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToASCAssociatedReaderID:(id)a0;
- (id)asDictionary;

@end
