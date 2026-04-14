@class NSString;

@interface GSKDebugNotification : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *text;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;

@end
