@class NSString, NSDictionary;

@interface PFAdjustment : NSObject

@property (readonly, nonatomic) unsigned long long formatVersion;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic) NSString *autoIdentifier;
@property (readonly, nonatomic) NSDictionary *autoSettings;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSString *maskUUID;

+ (BOOL)isValidArchiveDictionary:(id)a0 errors:(id)a1;

- (id)description;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)archiveDictionary;
- (id)initWithIdentifier:(id)a0 settings:(id)a1 autoIdentifier:(id)a2 autoSettings:(id)a3 enabled:(BOOL)a4;
- (id)initWithIdentifier:(id)a0 settings:(id)a1 autoIdentifier:(id)a2 autoSettings:(id)a3 enabled:(BOOL)a4 maskUUID:(id)a5;
- (id)initWithIdentifier:(id)a0 settings:(id)a1 enabled:(BOOL)a2;
- (id)initWithArchiveDictionary:(id)a0;

@end
