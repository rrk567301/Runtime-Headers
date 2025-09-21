@class NSString;

@interface WBSWindowEntity : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) char isPrivate;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 isPrivate:(char)a2;

@end
