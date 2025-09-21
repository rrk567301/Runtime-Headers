@class NSArray, NSString;

@interface SWCollaborationShareOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *optionsGroups;
@property (copy, nonatomic) NSString *summary;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shareOptionsWithOptionsGroups:(id)a0 summary:(id)a1;
+ (id)shareOptionsWithOptionsGroups:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptionsGroups:(id)a0;
- (id)initWithOptionsGroups:(id)a0 summary:(id)a1;
- (char)isEqualToShareOptions:(id)a0;

@end
