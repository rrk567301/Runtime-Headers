@class NSUUID, NSString;

@interface HMDSettingValueSelectionItem : NSObject

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *selection;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 selection:(id)a1;

@end
