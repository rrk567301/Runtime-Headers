@class NSData, NSString;

@interface SFResultSectionsDidLoadFeedback : SFFeedback {
    void /* function */ resultSections;
    void /* function */ queryIdentifier;
}

@property (nonatomic, copy) NSData *resultSections;
@property (nonatomic, copy) NSString *queryIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResultSections:(id)a0 queryString:(id)a1;
- (id)initWithResultSections:(id)a0 queryIdentifier:(id)a1;
- (id)initWithResultSectionsData:(id)a0 queryIdentifier:(id)a1;

@end
