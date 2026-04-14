@class NSString;

@interface TSWPOpaqueFontID : NSObject

@property (retain, nonatomic) NSString *desiredPostScriptName;
@property (retain, nonatomic) NSString *familyName;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFont:(id)a0;
- (id)initWithPostScriptName:(id)a0 familyName:(id)a1;

@end
