@class NSString, NSArray;

@interface SEMPhoneticDatabasePayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short itemType;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) NSArray *fieldValues;
@property (readonly, nonatomic) NSArray *sourceItemIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemType:(unsigned short)a0 originAppId:(id)a1 fieldValues:(id)a2 sourceItemIdentifiers:(id)a3;

@end
