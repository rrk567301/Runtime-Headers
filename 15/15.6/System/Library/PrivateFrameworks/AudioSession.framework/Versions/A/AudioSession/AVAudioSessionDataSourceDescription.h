@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject {
    void *_impl;
}

@property (readonly) NSNumber *dataSourceID;
@property (readonly) NSString *dataSourceName;
@property (readonly) NSString *location;
@property (readonly) NSString *orientation;
@property (readonly) NSArray *supportedPolarPatterns;
@property (readonly) NSString *selectedPolarPattern;
@property (readonly) NSString *preferredPolarPattern;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)setPreferredPolarPattern:(id)a0 error:(id *)a1;
- (char)isEqualToDataSource:(id)a0;

@end
