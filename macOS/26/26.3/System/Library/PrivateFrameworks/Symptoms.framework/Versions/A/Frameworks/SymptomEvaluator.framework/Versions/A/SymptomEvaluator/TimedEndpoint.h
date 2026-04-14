@class NSString, NSDate;

@interface TimedEndpoint : NSObject {
    NSString *_trigger;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) long long interfaceType;
@property (readonly, nonatomic) unsigned long long stallType;
@property (readonly, nonatomic) BOOL foreground;
@property (readonly, nonatomic) BOOL silent;

- (void)touch;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithEndpoint:(id)a0 trigger:(id)a1 interfaceType:(long long)a2 stallType:(unsigned long long)a3 foreground:(BOOL)a4 silent:(BOOL)a5;

@end
