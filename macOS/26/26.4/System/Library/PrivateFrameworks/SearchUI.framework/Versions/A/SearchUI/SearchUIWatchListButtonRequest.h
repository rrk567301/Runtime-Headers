@class NSString;

@interface SearchUIWatchListButtonRequest : NSObject

@property (retain) NSString *identifier;
@property int type;
@property BOOL isHorizontallySrollingStyle;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
