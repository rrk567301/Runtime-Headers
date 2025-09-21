@class NSData, NSString;

@interface ADIDRecord : NSObject

@property (retain, nonatomic) NSData *encryptedID;
@property (retain, nonatomic) NSString *ID;
@property (nonatomic) char dirty;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithID:(id)a0;

@end
