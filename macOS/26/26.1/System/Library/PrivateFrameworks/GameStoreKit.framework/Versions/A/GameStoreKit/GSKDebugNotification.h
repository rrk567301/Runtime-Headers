@class NSString;

@interface GSKDebugNotification : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *text;

- (id)initWithText:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
