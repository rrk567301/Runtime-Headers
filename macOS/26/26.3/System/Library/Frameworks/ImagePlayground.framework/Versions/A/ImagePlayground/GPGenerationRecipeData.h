@class NSData;

@interface GPGenerationRecipeData : NSObject <NSSecureCoding> {
    void /* function */ underlyingData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *underlyingData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)getDrawOnImageRecipe;
- (id)getRecipeInfo;
- (id)initWithUnderlyingData:(id)a0;

@end
