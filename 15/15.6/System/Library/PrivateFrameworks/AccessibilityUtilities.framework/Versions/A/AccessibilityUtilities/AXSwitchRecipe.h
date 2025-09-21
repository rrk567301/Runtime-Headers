@class NSUUID, NSString, NSArray;

@interface AXSwitchRecipe : NSObject {
    NSString *_name;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *mappings;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *unlocalizedName;
@property (readonly, nonatomic) char shouldContinueScanning;
@property (copy, nonatomic) NSString *menuIconIdentifier;

+ (id)recipeWithDictionaryRepresentation:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
