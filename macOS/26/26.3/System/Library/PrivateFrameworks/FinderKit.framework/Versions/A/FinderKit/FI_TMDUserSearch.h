@class NSString, NSArray, NSNumber;

@interface FI_TMDUserSearch : NSObject

@property (retain, nonatomic) NSString *filter;
@property (retain, nonatomic) NSArray *scope;
@property (retain, nonatomic) NSArray *slices;
@property (retain, nonatomic) NSNumber *searchSystemFiles;
@property (retain, nonatomic) NSNumber *fileNameOnly;
@property (retain, nonatomic) NSNumber *searchNonFinderFiles;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
