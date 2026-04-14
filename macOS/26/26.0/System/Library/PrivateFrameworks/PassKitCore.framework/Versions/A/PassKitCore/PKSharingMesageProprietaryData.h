@class NSArray;

@interface PKSharingMesageProprietaryData : NSObject

@property (retain, nonatomic) NSArray *displayableSharedEntitlements;
@property (nonatomic) long long accessType;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
