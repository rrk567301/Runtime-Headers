@class NSData, NSString;

@interface ADIDRecord : NSObject

@property (retain, nonatomic) NSData *encryptedID;
@property (retain, nonatomic) NSString *ID;
@property (nonatomic) BOOL dirty;

- (id)dictionaryRepresentation;
- (id)init;
- (id)description;
- (id)initWithID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
