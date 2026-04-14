@class NSString, NSArray;

@interface _ANEProcedureData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *procedureSymbol;
@property (readonly, nonatomic) NSArray *weightArray;

+ (id)new;
+ (id)procedureDataWithSymbol:(id)a0 weightArray:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProcedure:(id)a0 weightArray:(id)a1;

@end
