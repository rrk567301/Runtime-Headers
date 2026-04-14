@class NSString, NSArray;

@interface SEMPhoneticDatabasePayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short itemType;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) NSArray *fieldValues;
@property (readonly, nonatomic) NSArray *sourceItemIdentifiers;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithItemType:(unsigned short)a0 originAppId:(id)a1 fieldValues:(id)a2 sourceItemIdentifiers:(id)a3;

@end
