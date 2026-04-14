@class NSString;

@interface EDHeaderFooter : NSObject {
    NSString *mHeaderString;
    NSString *mFooterString;
}

+ (id)headerFooter;

- (id)headerString;
- (void).cxx_destruct;
- (id)description;
- (id)footerString;
- (void)setFooterString:(id)a0;
- (void)setHeaderString:(id)a0;

@end
