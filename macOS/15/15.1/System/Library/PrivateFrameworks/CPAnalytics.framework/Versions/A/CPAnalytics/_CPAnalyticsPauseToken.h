@class NSString;

@interface _CPAnalyticsPauseToken : NSObject {
    NSString *_description;
}

@property (readonly, nonatomic) unsigned long long identifier;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 identifier:(unsigned long long)a1;

@end
