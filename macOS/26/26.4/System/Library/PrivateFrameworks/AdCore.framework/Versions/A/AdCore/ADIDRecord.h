@class NSData, NSString;

@interface ADIDRecord : NSObject

@property (retain, nonatomic) NSData *encryptedID;
@property (retain, nonatomic) NSString *ID;
@property (nonatomic) BOOL dirty;

- (id)initWithID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
