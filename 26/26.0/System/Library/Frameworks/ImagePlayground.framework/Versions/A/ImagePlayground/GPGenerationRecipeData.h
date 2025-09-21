@class NSData;

@interface GPGenerationRecipeData : NSObject <NSSecureCoding> {
    void /* function */ underlyingData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *underlyingData;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)getDrawOnImageRecipe;
- (id)getRecipeInfo;
- (id)initWithUnderlyingData:(id)a0;

@end
