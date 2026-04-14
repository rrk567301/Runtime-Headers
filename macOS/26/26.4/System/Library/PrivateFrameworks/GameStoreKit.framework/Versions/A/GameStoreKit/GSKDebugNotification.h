@class NSString;

@interface GSKDebugNotification : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *text;

- (id)initWithText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
