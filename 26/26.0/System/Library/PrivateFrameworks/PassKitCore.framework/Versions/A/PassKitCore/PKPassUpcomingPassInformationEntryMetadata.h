@class NSTimeZone, NSString, NSDictionary, NSDate, PKPassUpcomingPassInformationEntryMetadataEvent;

@interface PKPassUpcomingPassInformationEntryMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassUpcomingPassInformationEntryMetadataEvent *eventMetadata;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) BOOL ignoreTimeComponents;
@property (readonly, copy, nonatomic) NSDictionary *semantics;

+ (id)_createMetadataForType:(unsigned long long)a0 identifier:(id)a1 semantics:(id)a2;
+ (id)createFromDictionary:(id)a0 bundle:(id)a1;

- (BOOL)isEqualToMetadata:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 type:(unsigned long long)a1 semantics:(id)a2;
- (BOOL)populateFromDictionary:(id)a0 bundle:(id)a1 semantics:(id)a2;

@end
