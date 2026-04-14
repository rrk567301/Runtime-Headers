@interface OADGraphic : OADDrawable {
    OADGraphic *mMasterGraphic;
}

- (id)description;
- (void).cxx_destruct;
- (id)geometry;
- (void)setMasterGraphic:(id)a0;
- (id)graphicProperties;
- (id)masterGraphic;

@end
