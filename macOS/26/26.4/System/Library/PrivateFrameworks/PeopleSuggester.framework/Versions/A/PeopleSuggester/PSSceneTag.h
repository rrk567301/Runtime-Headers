@class NSArray, NSString;

@interface PSSceneTag : NSObject

@property (retain, nonatomic) NSArray *detectorClasses;
@property (nonatomic) double searchThreshold;
@property (retain, nonatomic) NSString *humanReadableLabel;
@property (nonatomic) BOOL isSearchable;
@property (nonatomic) long long identifier;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSArray *humanReadableSynonyms;
@property (retain, nonatomic) NSArray *parentClasses;
@property (retain, nonatomic) NSString *network;
@property (retain, nonatomic) NSArray *childrenClasses;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
