@class NSData, ICDataPersister;

@interface ICNotePasteboardData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *attributedStringData;
@property (readonly, nonatomic) ICDataPersister *dataPersister;

+ (id)pasteboardDataFromPersistenceData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)persistenceData;
- (id)initWithAttributedStringData:(id)a0 dataPersister:(id)a1;

@end
