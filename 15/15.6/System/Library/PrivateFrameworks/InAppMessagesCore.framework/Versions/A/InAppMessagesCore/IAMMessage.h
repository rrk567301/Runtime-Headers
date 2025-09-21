@class NSString, NSArray;

@interface IAMMessage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *messageGroupIdentifier;
@property (readonly, nonatomic) NSArray *contentPages;
@property (readonly, nonatomic) char requiresCloseButton;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithICInAppMessageEntry:(id)a0;
- (id)initWithIdentifier:(id)a0 messageGroupIdentifier:(id)a1 contentPages:(id)a2 requiresCloseButton:(char)a3;

@end
