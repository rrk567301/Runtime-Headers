@class NSString, NSNumber;

@interface ITLibArtist : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sortName;
@property (retain, nonatomic) NSNumber *persistentID;
@property (retain, nonatomic) NSNumber *representativeItemPersistentID;

+ (id)artistWithDict:(id)a0;

- (void).cxx_destruct;

@end
