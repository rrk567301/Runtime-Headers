@class NSArray;

@interface PKSharingMesageProprietaryData : NSObject

@property (retain, nonatomic) NSArray *displayableSharedEntitlements;
@property (nonatomic) long long accessType;

- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
