@class NSDate;

@interface LSDefaultApplicationQueryEntry : NSObject

@property (readonly, nonatomic) NSDate *windowOpenDate;
@property (readonly, nonatomic) NSDate *refreshDate;
@property (readonly, nonatomic, getter=isDefaultForCategory) BOOL defaultForCategory;

+ (id)createFromPlistRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)initWithWindowOpenDate:(id)a0 refreshDate:(id)a1 defaultForCategory:(BOOL)a2;
- (id)plistRepresentation;

@end
