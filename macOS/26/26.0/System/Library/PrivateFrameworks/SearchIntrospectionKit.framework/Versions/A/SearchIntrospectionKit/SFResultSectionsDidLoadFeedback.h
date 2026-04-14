@class NSData, NSString;

@interface SFResultSectionsDidLoadFeedback : SFFeedback {
    void /* function */ resultSections;
    void /* function */ queryIdentifier;
}

@property (nonatomic, copy) NSData *resultSections;
@property (nonatomic, copy) NSString *queryIdentifier;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResultSections:(id)a0 queryString:(id)a1;
- (id)initWithResultSections:(id)a0 queryIdentifier:(id)a1;
- (id)initWithResultSectionsData:(id)a0 queryIdentifier:(id)a1;

@end
